
        
            Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
      def fetch_checksum_for(tag)
    tag = find_matching_tag(tag)
    return self[tag], tag if tag
  end
    
          path_modified_time = path.mtime
      days_default = options[:days_default]
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
      def report
    return @report if @report
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end
