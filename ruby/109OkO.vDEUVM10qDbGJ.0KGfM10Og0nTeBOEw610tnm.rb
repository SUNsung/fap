
        
              return class_ref
    end
    
        def handle_tls_error!(e)
      # Apple has upgraded its App Store Connect servers to require TLS 1.2, but
      # system Ruby 2.0 does not support it. We want to suggest that users upgrade
      # their Ruby version
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          describe 'running without fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(false)
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
      included do
    before_action :set_rate_limit_headers, if: :rate_limited_request?
  end
    
      def session_needs_update?
    !current_session.nil? && current_session.updated_at < UPDATE_SIGN_IN_HOURS.hours.ago
  end
end

    
          delete :destroy, params: {post_id: @message.id, id: @like.id}, format: :json
      expect(response.status).to eq(204)
    end
    
      describe '#reset_authentication_token' do
    context 'for a logged in user' do
      before do
        sign_in @user, scope: :user
      end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
            def signal_end_of_output
          output_pipe.puts(END_OF_OUTPUT_SIGNAL)
          STDOUT.flush
        end
    
    class SinatraStaticServer < Sinatra::Base
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
    module Jekyll
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        php_bin = attributes[:pear_php_bin] || '/usr/bin/php'
    logger.info('Setting php_bin', :php_bin => php_bin)
    safesystem('pear', '-c', config, 'config-set', 'php_bin', php_bin)
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)