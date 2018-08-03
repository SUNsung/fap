
        
        def excluded_bundle_id(bundle_id)
  %r{^com\.apple\.}.match(bundle_id)
end