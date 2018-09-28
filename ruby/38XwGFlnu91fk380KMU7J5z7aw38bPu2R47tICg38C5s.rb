
        
          find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
    # Have all rests run with english browser locale
ENV['LANG'] = 'C'
    
    World(NavigationHelpers)

    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
      end
    
        # This reopens ALL logfiles in the process that have been rotated
    # using logrotate(8) (without copytruncate) or similar tools.
    # A +File+ object is considered for reopening if it is:
    #   1) opened with the O_APPEND and O_WRONLY flags
    #   2) the current open file handle does not match its original open path
    #   3) unbuffered (as far as userspace buffering goes, not O_SYNC)
    # Returns the number of files reopened
    def self.reopen_logs
      to_reopen = []
      append_flags = File::WRONLY | File::APPEND
    
      Sidekiq::Client.prepend TestingClient
    
    ENV['RAILS_ENV'] = 'test'
    
    require 'erb'
require 'digest'
require 'tempfile'
require 'paperclip/version'
require 'paperclip/geometry_parser_factory'
require 'paperclip/geometry_detector_factory'
require 'paperclip/geometry'
require 'paperclip/processor'
require 'paperclip/processor_helpers'
require 'paperclip/tempfile'
require 'paperclip/thumbnail'
require 'paperclip/interpolations/plural_cache'
require 'paperclip/interpolations'
require 'paperclip/tempfile_factory'
require 'paperclip/style'
require 'paperclip/attachment'
require 'paperclip/storage'
require 'paperclip/callbacks'
require 'paperclip/file_command_content_type_detector'
require 'paperclip/media_type_spoof_detector'
require 'paperclip/content_type_detector'
require 'paperclip/glue'
require 'paperclip/errors'
require 'paperclip/missing_attachment_styles'
require 'paperclip/validators'
require 'paperclip/logger'
require 'paperclip/helpers'
require 'paperclip/has_attached_file'
require 'paperclip/attachment_registry'
require 'paperclip/filename_cleaner'
require 'paperclip/rails_environment'
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end