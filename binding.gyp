{
    "targets": [
        {
            "include_dirs": [
                "<!(node -e \"require('nan')\")"
            ],
            "target_name": "addon",
            "sources": ["src/main.cpp"]
        }
    ]
}
