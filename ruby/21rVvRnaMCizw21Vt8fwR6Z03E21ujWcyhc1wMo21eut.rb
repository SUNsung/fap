
        
          describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
          a = '        Events will have the fields you specified.  Your options look like:\n\n            {\n      \'url\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@src\'\n      },\n      \'title\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@title\'\n      }\n    }\'\n'
      expect(Utils.unindent(a)).to eq('Events will have the fields you specified.  Your options look like:\n\n    {\n      \'url\': {\n\'css\': \'#comic img\',\n\'value\': \'@src\'\n      },\n      \'title\': {\n\'css\': \'#comic img\',\n\'value\': \'@title\'\n      }\n    }\'')
    end
  end
    
        def initialize
      @pages = {}
    end
    
        def base_url
      @base_url ||= URL.parse self.class.base_url
    end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
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
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end