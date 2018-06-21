
        
            def parse_symbol_spec(spec, tags)
      case spec
      when :clt
        odisabled ''depends_on :clt''
      when :tex
        odisabled ''depends_on :tex''
      when :libltdl
        output_disabled(spec, 'libtool')
      when :apr
        output_disabled(spec, 'apr-util')
      when :fortran
        output_disabled(spec, 'gcc')
      when :gpg
        output_disabled(spec, 'gnupg')
      when :hg
        output_disabled(spec, 'mercurial')
      when :mpi
        output_disabled(spec, 'open-mpi')
      when :python, :python2
        output_disabled(spec, 'python@2')
      when :python3
        output_disabled(spec, 'python')
      when :ant, :autoconf, :automake, :bsdmake, :cairo, :emacs, :expat,
           :fontconfig, :freetype, :libtool, :libpng, :mysql, :perl, :pixman,
           :postgresql, :rbenv, :ruby
        output_disabled(spec)
      else
        super
      end
    end
    
      def resource(name, klass = Resource, &block)
    if block_given?
      raise DuplicateResourceError, name if resource_defined?(name)
      res = klass.new(name, &block)
      resources[name] = res
      dependency_collector.add(res)
    else
      resources.fetch(name) { raise ResourceMissingError.new(owner, name) }
    end
  end
    
    Bundler.require(
    *Rails.groups(
        coverage: [:test],
        db: all_environments,
        pcap: all_environments
    )
)
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    require 'rex/post/meterpreter'
    
    #certCN cannot contain commas
certCN 		= 'Metasploit Inc.'
#keytoolOpts 	= '-genkey -alias signFiles -keystore msfkeystore ' +
#		  '-storepass msfstorepass -dname \'cn=#{certCN}\' ' +
#		  '-keypass msfkeypass'
    
    	def parse_file(file)
		while (line = file.gets)
			parse_line(line)
		end
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
        @search ||= UserSearch.new
    @users ||= []
  end
    
          def redirect_prompt_error_display(error, error_description)
        redirect_params_hash = {error: error, error_description: error_description, state: params[:state]}
        redirect_fragment = redirect_params_hash.compact.map {|key, value| key.to_s + '=' + value }.join('&')
        redirect_to params[:redirect_uri] + '?' + redirect_fragment
      end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end
    
            def failure_message_when_negated
          'Should not have an attachment named #{@attachment_name}'
        end
        alias negative_failure_message failure_message_when_negated
    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end