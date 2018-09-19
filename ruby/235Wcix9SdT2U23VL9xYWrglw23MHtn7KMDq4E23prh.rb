
        
          def self.repository(tap = nil)
    if tap.nil? || tap.core_tap?
      'bottles'
    else
      'bottles-#{tap.repo}'
    end
  end
end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built as a bottle (i.e. binary package).
  def bottle?
    include? 'build-bottle'
  end
    
      def app_caveats
    if keg && keg.app_installed?
      <<-EOS.undent
        .app bundles were installed.
        Run `brew linkapps #{keg.name}` to symlink these to /Applications.
      EOS
    end
  end
    
        def self.cleanup_lockfiles
      return unless HOMEBREW_CACHE_FORMULA.directory?
      candidates = HOMEBREW_CACHE_FORMULA.children
      lockfiles  = candidates.select { |f| f.file? && f.extname == '.brewing' }
      lockfiles.each do |file|
        next unless file.readable?
        file.open.flock(File::LOCK_EX | File::LOCK_NB) && file.unlink
      end
    end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
          opts.on('--trace', :NONE, 'Show a full Ruby stack trace on error') do
        @options[:trace] = true
      end
    end
    
          Sass::Plugin.on_template_modified do |template|
        puts '>>> Change detected to: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_created do |template|
        puts '>>> New template detected: #{template}'
        STDOUT.flush
      end
      Sass::Plugin.on_template_deleted do |template|
        puts '>>> Deleted template detected: #{template}'
        STDOUT.flush
      end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end