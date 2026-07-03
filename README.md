# Road Creator Pro Editor Expansion

An Unreal Engine 5.8 editor plugin for Road Creator Pro.

It adds a dedicated `Road Creator` editor mode for building, connecting,
validating, repairing, and importing Road Creator Pro road networks.

## Requirements

- Unreal Engine 5.8
- Road Creator Pro installed in the project
- Windows / Win64 for the included binary build

## Install

Copy the plugin folder into your project:

```text
YourProject/
  Plugins/
    RoadCreatorProEditorExpansion/
```

Then open the project and enable:

```text
Edit > Plugins > Road Creator Pro Editor Expansion
```

Restart the editor if Unreal asks.

## What It Adds

- A `Road Creator` editor mode
- Road endpoint snap points
- Intersection and transition socket snap points
- Snap A / Snap B connection tools
- Road connection preview
- Existing road endpoint snapping
- Network validation and near-miss repair tools
- OpenStreetMap `.osm` import
- OSM road feature mapping for sidewalks, lights, markings, barriers, bridges, tunnels, signs, decals, and traffic signals

## Basic Workflow

1. Open the `Road Creator` editor mode.
2. Select or create Road Creator Pro roads.
3. Turn on snap points if they are hidden.
4. Select a visible snap point.
5. Click `Set Snap A from Selection`.
6. Select another snap point.
7. Click `Set Snap B from Selection`.
8. Use either:
   - `Create Road Between Snap A and B`
   - `Snap Road Endpoint to Other Snap`

## Snap Point Colors

- Green: road start point
- Orange: road end point
- Cyan: main mesh connector socket
- Magenta: other mesh socket
- Yellow: selected snap point
- Blue: Snap A
- Purple: Snap B
- White: merged snap points

## Useful Shortcuts

- `V`: Select / Move
- `A`: Add / Extend
- `D`: Draw / Connect
- `X`: Delete
- `G`: Toggle grid snap
- `[` / `]`: Change grid size
- `Esc`: Cancel current operation
- `Delete`: Delete selected road

Shortcuts are ignored while using right mouse viewport navigation.

## OpenStreetMap Import

Use:

```text
Road Creator mode > Import OpenStreetMap...
```

Supported input:

- `.osm` XML files
- Small city or neighborhood extracts

Not supported:

- `.pbf`
- GeoJSON
- Full-country extracts

The importer can create:

- Road Creator Pro road actors
- Intersection meshes
- Transition meshes
- Side-road junction placers
- Building placeholders
- Traffic signal actors
- Road signs
- Road decals
- OSM metadata tags on imported actors

The import dialog lets you choose which road features to apply. It can read OSM
tags such as:

- `lanes`
- `maxspeed`
- `sidewalk`
- `lit`
- `surface`
- `bridge`
- `tunnel`
- `barrier`
- `cycleway`
- `busway`
- `parking:*`
- `highway=traffic_signals`

Imported actors are placed in:

```text
OSM Import/<filename>
```

Imports do not delete previous imports.

## Validation

`Run Network Check` scans the level for common road network issues:

- Open road endpoints
- Nearby endpoints that should probably be snapped
- Direction mismatches
- Lane-count mismatches

Validation does not change the level by itself.

Repair buttons are opt-in and work from the latest validation report.

## World Partition Note

OSM imported actors are marked as not spatially loaded to avoid Unreal warnings
about spatially loaded actors referencing non-spatial actors.

If an older imported map still warns on save, select the imported OSM actors and
make sure their `Is Spatially Loaded` setting matches.

## Binary Builds

For binary-only distribution, keep:

```text
RoadCreatorProEditorExpansion.uplugin
Binaries/
Intermediate/
Source/RoadCreatorProEditorExpansion/RoadCreatorProEditorExpansion.Build.cs
```

Do not ship:

```text
Source/RoadCreatorProEditorExpansion/Private/
*.cpp
*.pdb
```

The packaged `Build.cs` should include:

```csharp
bUsePrecompiled = true;
```

## Limitations

- This is an editor plugin, not a runtime gameplay plugin.
- OSM import is a best-effort conversion, not a perfect road engineering tool.
- Complex real-world intersections may need manual cleanup.
- Large OSM files can create many actors and slow the editor.
- Elevation import is not currently supported.

## License

See `LICENSE`.
