
        
        #
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        puts 'GC Stats:'
    GC.start(full_mark: true, immediate_sweep: false)
    puts JSON.pretty_generate(GC.stat)
  end
end
    
      paths
end
    
        # Gets the name of this layout.
    attr_reader :name
    
          def measure_bytes
        yield.tap do |str|
          @renderer.increment_bytes(@filename, str.bytesize)
        end
      end
    
    class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
      module Wrapper
    attr_accessor :results
    
      def evernote_consumer_secret
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_secret
  end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def running?
    (@job.locked_at || @job.locked_by) && @job.failed_at.nil?
  end
end

    
        respond_to do |format|
      format.html
      format.json { render json: @user_credential }
    end
  end
    
      # Enable locale fallbacks for I18n (makes lookups for any locale fall back to
  # the I18n.default_locale when a translation can not be found).
  config.i18n.fallbacks = true
    
    desc 'LESS to stdin -> Sass to stdout'
task :less_to_scss, :branch do |t, args|
  require './tasks/converter'
  puts Converter.new(branch: args[:branch]).convert_less(STDIN.read)
end
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
      class Railtie
    def self.insert
      Paperclip.options[:logger] = Rails.logger