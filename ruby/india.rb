
        
            keys.find do |key|
      if key.to_s.end_with?('_or_later')
        later_tag = key.to_s[/(\w+)_or_later$/, 1].to_sym
        MacOS::Version.from_symbol(later_tag) <= tag_version
      end
    end
  end
end

    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
      def llvm
    @llvm ||= MacOS.llvm_build_version if MacOS.has_apple_developer_tools?
  end
    
          To export the needed variables, add them to your dotfiles.
       * On Bash, add them to `~/.bash_profile`.
       * On Zsh, add them to `~/.zprofile` instead.
    
        def types_as_json
      @types.values.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
          IGNORE_ENTRIES = %w(
        Overview
        Introduction
        Usage
        Methods
        Options
      )
    end
  end
end

    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end