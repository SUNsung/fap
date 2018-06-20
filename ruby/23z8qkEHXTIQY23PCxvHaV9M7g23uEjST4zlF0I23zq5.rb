
        
              # Generate a Hash which breaks the recursive chain.
      # Certain fields which are normally available are omitted.
      #
      # Returns a Hash with only non-recursive fields present.
      def collapse_document(doc)
        doc.keys.each_with_object({}) do |(key, _), result|
          result[key] = doc[key] unless NESTED_OBJECT_FIELD_BLACKLIST.include?(key)
        end
      end
    end
  end
end

    
        Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
      def keys
    @checksums.keys
  end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built with {Formula.devel} instead of {Formula.stable}.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def devel?
    include? 'devel'
  end
    
          if f.plist_manual
        s << 'Or, if you don't want/need launchctl, you can just run:'
        s << '  #{f.plist_manual}'
      end
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
      def index
    return redirect_to path('/login') if SiteSetting.login_required? && current_user.nil?
    
      def create
    color_scheme = ColorScheme.create(color_scheme_params)
    if color_scheme.valid?
      render json: color_scheme, root: false
    else
      render_json_error(color_scheme)
    end
  end
    
      def index
    url = params[:filter]
    permalinks = Permalink.filter_by(url)
    render_serialized(permalinks, PermalinkSerializer)
  end
    
          def to_h
        directives.to_h
      end
    
          def run_installer(command: nil, verbose: false, **_options)
        ohai 'Running installer for #{cask}; your password may be necessary.'
        ohai 'Package installers may write to any location; options such as --appdir are ignored.'
        unless path.exist?
          raise CaskError, 'pkg source file not found: '#{path.relative_path_from(cask.staged_path)}''
        end
        args = [
          '-pkg',    path,
          '-target', '/'
        ]
        args << '-verboseR' if verbose
        if stanza_options.fetch(:allow_untrusted, false)
          args << '-allowUntrusted'
        end
        with_choices_file do |choices_path|
          args << '-applyChoiceChangesXML' << choices_path if choices_path
          command.run!('/usr/sbin/installer', sudo: true, args: args, print_stdout: true)
        end
      end
    
          private