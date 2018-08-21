
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
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
    
              if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
              after_install(new_blog_path, options)
        end
    
          def matches(_)
        false
      end
    
          def day
        @obj.date.strftime('%d')
      end
    
          #
      # The version constraint required to activate a given gem.
      # Usually the gem version requirement is '> 0,' because any version
      # will do. In the case of jekyll-docs, however, we require the exact
      # same version as Jekyll.
      #
      # Returns a String version constraint in a parseable form for
      # RubyGems.
      def version_constraint(gem_name)
        return '= #{Jekyll::VERSION}' if gem_name.to_s.eql?('jekyll-docs')
        '> 0'
      end
    
        describe '#download' do
      it 'returns the p8 file' do
        mock_client_response(:download_key) do
          %{
-----BEGIN PRIVATE KEY-----
this is the encoded private key contents
-----END PRIVATE KEY-----
          }
        end
        p8_string = key.download
        expect(p8_string).to include('PRIVATE KEY')
      end
    end
    
      # spec.test_files    = spec.files.grep(%r{^(test|spec|features)/})
  spec.require_paths = Dir['*/lib']
    
        # get the pos of css def at pos (search backwards)
    def css_def_pos(css, pos, depth = -1)
      to       = open_brace_pos(css, pos, depth)
      prev_def = to - (css[0..to].reverse.index(RULE_CLOSE_BRACE_RE_REVERSE) || to) + 1
      from     = prev_def + 1 + (css[prev_def + 1..-1] =~ %r(^\s*[^\s/]))
      (from..to - 1)
    end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false