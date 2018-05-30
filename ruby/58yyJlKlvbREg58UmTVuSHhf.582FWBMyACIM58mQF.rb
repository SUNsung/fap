
        
            # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
    # See chcase for an example
class ScriptFileFormula < Formula
  def install
    bin.install Dir['*']
  end
end
    
      test 'permit parameters for new actions' do
    sanitizer = sanitizer('user' => { 'email' => 'jose@omglol', 'name' => 'Jose' })
    sanitizer.permit(:invite_user, keys: [:email, :name])
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
      if /(bcc|ms|cyg)win|mingw|emx/ =~ RUBY_PLATFORM
    def test_long_unc
      feature3399 = '[ruby-core:30623]'
      path = File.expand_path(__FILE__)
      path.sub!(%r'\A//', 'UNC/')
      assert_nothing_raised(Errno::ENOENT, feature3399) do
        File.stat('//?/#{path}')
      end
    end
  end
    
      def test_fetch_error
    assert_raise(KeyError) { @cls[].fetch(1) }
    assert_raise(KeyError) { @h.fetch('gumby') }
    e = assert_raise(KeyError) { @h.fetch('gumby'*20) }
    assert_match(/key not found: 'gumbygumby/, e.message)
    assert_match(/\.\.\.\z/, e.message)
    assert_same(@h, e.receiver)
    assert_equal('gumby'*20, e.key)
  end
    
        [Set, Set2].each { |klass|
      assert_equal(true, set.subset?(klass[1,2,3,4]), klass.name)
      assert_equal(true, set.subset?(klass[1,2,3]), klass.name)
      assert_equal(false, set.subset?(klass[1,2]), klass.name)
      assert_equal(false, set.subset?(klass[]), klass.name)
    }
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
      class Honda < Car
    def initialize(*args)
      self.make = 'Honda'
      super(*args)
    end
  end
    
      def self.status_of_blocked_thread
    m = Mutex.new
    m.lock
    t = Thread.new { m.lock }
    Thread.pass while t.status and t.status != 'sleep'
    status = Status.new t
    m.unlock
    t.join
    status
  end
    
      # Hangs on 1.8.6.114 OS X, possibly also on Linux
  quarantine! do
    it 'is deferred if ensure clause sleeps' do
      ThreadSpecs.wakeup_dying_sleeping_thread(@method) { sleep; ScratchPad.record :after_sleep }
      ScratchPad.recorded.should == :after_sleep
    end
  end
    
        t.join
  end
    
          sleep
      after_sleep1 = true
    
      it 'handles bad leap seconds by carrying values forward' do
    with_timezone 'UTC' do
      time = Time.send(@method, 2017, 7, 5, 23, 59, 60)
      time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 6
      time.month.should == 7
    end
  end
    
    # Copyright (C) 2008 Rapid7, Inc.
    
    class Template
  attr_accessor :template, :result
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
      desc 'Started'
  task :started do
  end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    end

    
          cache(gist, file, data.body) unless @cache_disabled
      data.body
    end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
    module Jekyll