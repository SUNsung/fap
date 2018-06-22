
        
            # The entry filter for this collection.
    # Creates an instance of Jekyll::EntryFilter.
    #
    # Returns the instance of Jekyll::EntryFilter for this collection.
    def entry_filter
      @entry_filter ||= Jekyll::EntryFilter.new(site, relative_directory)
    end
    
            def after_install(path, options = {})
          unless options['blank'] || options['skip-bundle']
            begin
              require 'bundler'
              bundle_install path
            rescue LoadError
              Jekyll.logger.info 'Could not load Bundler. Bundle install skipped.'
            end
          end
    
          class Servlet < WEBrick::HTTPServlet::FileHandler
        DEFAULTS = {
          'Cache-Control' => 'private, max-age=0, proxy-revalidate, ' \
            'no-store, no-cache, must-revalidate',
        }.freeze
    
    module Hbc
  class DSL
    class Container
      VALID_KEYS = Set.new [
        :type,
        :nested,
      ]
    
          next if path.symlink? || path.directory?
    
      def apply
    data = contents.gsub('HOMEBREW_PREFIX', HOMEBREW_PREFIX)
    args = %W[-g 0 -f -#{strip}]
    Utils.popen_write('patch', *args) { |p| p.write(data) }
    raise ErrorDuringExecution.new('patch', args) unless $CHILD_STATUS.success?
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            target_module << if app.resolved_build_setting('SWIFT_OPTIMIZATION_LEVEL').values.any?
                           <<-RUBY
  # Comment the next line if you're not using Swift and don't want to use dynamic frameworks
  use_frameworks!
    
            def run
          print_version
          signal_end_of_output
          listen
        end