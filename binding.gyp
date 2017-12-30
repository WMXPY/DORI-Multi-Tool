{
    "targets": [
        {
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ],
            "target_name": "dorimt",
            "sources": ["src/main.cc"]
        }
    ]
}
