
        
                def self.disabled_via_active_directory?(dn, adapter)
          adapter.dn_matches_filter?(dn, AD_USER_DISABLED)
        end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
            def value_text
          @status ? ('%.2f%%' % @status) : 'unknown'
        end
    
            def initialize(project, ref)
          @project = project
          @ref = ref
    
            def key_width
          62
        end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
        # get sha of the branch (= the latest commit)
    def get_branch_sha
      @branch_sha ||= begin
        if @branch + '\n' == %x[git rev-parse #@branch]
          @branch
        else
          cmd = 'git ls-remote #{Shellwords.escape 'https://github.com/#@repo'} #@branch'
          log cmd
          result = %x[#{cmd}]
          raise 'Could not get branch sha!' unless $?.success? && !result.empty?
          result.split(/\s+/).first
        end
      end
    end
    
        # Render the template to CSS.
    #
    # @return [String] The CSS
    # @raise [Sass::SyntaxError] if there's an error in the document
    # @raise [Encoding::UndefinedConversionError] if the source encoding
    #   cannot be converted to UTF-8
    # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
    def render
      return _to_tree.render unless @options[:quiet]
      Sass::Util.silence_sass_warnings {_to_tree.render}
    end
    
        # Finds the line of the source template
    # on which an exception was raised.
    #
    # @param exception [Exception] The exception
    # @return [String] The line number
    def get_line(exception)
      # SyntaxErrors have weird line reporting
      # when there's trailing whitespace
      if exception.is_a?(::SyntaxError)
        return (exception.message.scan(/:(\d+)/).first || ['??']).first
      end
      (exception.backtrace[0].scan(/:(\d+)/).first || ['??']).first
    end
    
    module Sass
  module Importers
    # The default importer, used for any strings found in the load path.
    # Simply loads Sass files from the filesystem using the default logic.
    class Filesystem < Base
      attr_accessor :root
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end