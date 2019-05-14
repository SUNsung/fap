
        
          def has_setting?(name)
    has_key?(name.to_sym) || has_key?('#{name.to_s}?'.to_sym) || name.to_sym == :default_locale
  end
    
        def length
      @queue.length
    end
    
      describe '#<<' do
    it 'normalizes directive name' do
      builder << {
        script_src: ['symbol_underscore'],
        'script-src': ['symbol_dash'],
        'script_src' => ['string_underscore'],
        'script-src' => ['string_dash'],
      }
    
      def self.bundle(langs)
    result = File.read(HIGHLIGHTJS_DIR + 'highlight.min.js')
    langs.each do |lang|
      begin
        result << '\n' << File.read(HIGHLIGHTJS_DIR + 'languages/#{lang}.min.js')
      rescue Errno::ENOENT
        # no file, don't care
      end
    end
    
          return response unless html_response?(headers)
      ContentSecurityPolicy.base_url = request.host_with_port if Rails.env.development?
    
        # this is only required for NGINX X-SendFile it seems
    response.headers['Content-Length'] = File.size(cache_file).to_s
    set_cache_control_headers
    send_file(cache_file, disposition: :inline)
  end
    
          render plain: svg_sprite, disposition: nil, content_type: 'application/javascript'
    end
  end
    
        before_action :ensure_logged_in, except: [:voters]
    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
    
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
    desc 'Publish to rubygems. Same as release'
task :publish => :release
    
        def tmux_window_and_pane_target
      '#{project.name}:#{window_index}.#{pane_index}'
    end
    
      chain :with_commands do |*expected|
    @commands = expected
  end
  alias_method :and_commands, :with_commands