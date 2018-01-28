
        
        puts 'Stackprof Mode: #{MODE}'
    
      next if extensions.empty?
  mimes[mime] = [] if mimes[mime].nil?
  mimes[mime].concat extensions
end
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    require 'erb'
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
    describe Deliver::HtmlGenerator do
  let(:generator) { Deliver::HtmlGenerator.new }
    
          def load_all_devices
        self.devices = []
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_tag_exists(tag: '1.2.0')
          end').runner.execute(:test)
        end
      end
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'should be able to deal with PATH_INFO = nil (fcgi?)' do
      app = Rack::Protection::PathTraversal.new(proc { 42 })
      expect(app.call({})).to eq(42)
    end
  end
    
      describe '#html?' do
    context 'given an appropriate content-type header' do
      subject { Rack::Protection::Base.new(nil).html? 'content-type' => 'text/html' }
      it { is_expected.to be_truthy }
    end
    
    Dir[File.expand_path('../support/**/*.rb', __FILE__)].each { |f| require f }
