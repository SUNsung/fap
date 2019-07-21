
        
              # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
    
    #############################################################################
#
# Helper functions
#
#############################################################################
    
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
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
    require 'devise/hooks/timeoutable'
    
      it 'unless build.without? conditional' do
    expect_offense(<<~RUBY)
      class Foo < Formula
        desc 'foo'
        url 'https://brew.sh/foo-1.0.tgz'
        def post_install
          return unless build.without? 'bar'
                        ^^^^^^^^^^^^^^^^^^^^ Use if build.with? 'bar' instead of unless build.without? 'bar'
        end
      end
    RUBY
  end
    
          def sdk_path(v = nil)
        sdk(v)&.path
      end
    
          it { is_expected.to eq(GitHubGitDownloadStrategy) }
    end