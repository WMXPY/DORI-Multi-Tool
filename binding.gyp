{
    "targets": [
        {
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ],
            "target_name": "fv",
            "sources": ["src/main.cc"]
        }
    ]
}
