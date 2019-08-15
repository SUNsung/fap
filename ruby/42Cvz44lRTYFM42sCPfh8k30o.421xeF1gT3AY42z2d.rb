
        
            should 'hide unpublished posts' do
      published = Dir[dest_dir('publish_test/2008/02/02/*.html')].map \
        { |f| File.basename(f) }
      assert_equal 1, published.size
      assert_equal 'published.html', published.first
    end
    
            def initialize(config)
          @main_fallback_highlighter = config['highlighter'] || 'rouge'
          @config = config['kramdown'] || {}
          @highlighter = nil
          setup
          load_dependencies
        end
    
    def liquid_escape(markdown)
  markdown.gsub(%r!(`{[{%].+[}%]}`)!, '{% raw %}\\1{% endraw %}')
end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, {% if author == 'Jane Doe' %} at finibus eros laoreet id. {% else %}
Etiam sit amet est in libero efficitur.{% endif %}
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
LIQUID
    
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
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    describe SoftwareSpec do
  subject(:spec) { described_class.new }
    
        def sdk_path_if_needed(v = nil)
      # Prefer Xcode SDK when both Xcode and the CLT are installed.
      # Expected results:
      # 1. On Xcode-only systems, return the Xcode SDK.
      # 2. On Xcode-and-CLT systems where headers are provided by the system, return nil.
      # 3. On CLT-only systems with no CLT SDK, return nil.
      # 4. On CLT-only systems with a CLT SDK, where headers are provided by the system, return nil.
      # 5. On CLT-only systems with a CLT SDK, where headers are not provided by the system, return the CLT SDK.
    
          def minimum_version
        case MacOS.version
        when '10.15' then '11.0.0'
        when '10.14' then '10.0.0'
        when '10.13' then '9.0.0'
        when '10.12' then '8.0.0'
        else              '1.0.0'
        end
      end
    
    require 'version'
    
          not_installed_formulae.each do |formula|
        FormulaInstaller.new(formula).tap do |fi|
          fi.installed_as_dependency = true
          fi.installed_on_request = false
          fi.show_header = true
          fi.verbose = verbose?
          fi.prelude
          fi.install
          fi.finish
        end
      end
    
          # Initialize a new instance
      #
      # @param  [PodTarget, AggregateTarget] target @see target
      #
      def initialize(target)
        @target = target
        @headers = [
          Header.new(target.umbrella_header_path.basename, true),
        ]
      end
    
          def compare_with_real_token(token, session)
        secure_compare(token, real_token(session))
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('block-all_mixed_content; connect-src 'self'; default-src none; disown-opener; img-src 'self'; script-src 'self'; style-src 'self'; upgrade-insecure_requests')
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          q.clear
      assert SetWorker.perform_async(1)
      assert_equal 0, q.size
    
      it 'should remove all but last Sidekiq::DeadSet.max_jobs-1 jobs' do
    Sidekiq::DeadSet.stub(:max_jobs, 3) do
      dead_set.kill(Sidekiq.dump_json(jid: '000101', class: 'MyWorker1', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000102', class: 'MyWorker2', args: []))
      dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: []))
    end
    
      it 'allows delayed delivery of ActionMailer mails' do
    assert_equal [], Sidekiq::Queue.all.map(&:name)
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    UserMailer.delay.greetings(1, 2)
    assert_equal ['default'], Sidekiq::Queue.all.map(&:name)
    assert_equal 1, q.size
  end
    
      it 'shuts down the system' do
    mgr = new_manager(options)
    mgr.stop(::Process.clock_gettime(::Process::CLOCK_MONOTONIC))
  end
    
        it 'stubs the delay call on mailers' do
      assert_raises InlineError do
        InlineFooMailer.delay.bar('three')
      end
    end
    
    class TimedWorker
  include Sidekiq::Worker
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
    run SinatraStaticServer

    
      end
    
        def get_gist_url_for(gist, file)
      'https://gist.githubusercontent.com/raw/#{gist}/#{file}'
    end
    
    module Jekyll