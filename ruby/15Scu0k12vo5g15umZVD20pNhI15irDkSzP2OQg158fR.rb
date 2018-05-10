
        
              key = Spaceship::Portal::Key.find('some-key-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('some-key-id')
    end
  end
    
      def test_EQUAL # '=='
    h1 = @cls[ 'a' => 1, 'c' => 2 ]
    h2 = @cls[ 'a' => 1, 'c' => 2, 7 => 35 ]
    h3 = @cls[ 'a' => 1, 'c' => 2, 7 => 35 ]
    h4 = @cls[ ]
    assert_equal(h1, h1)
    assert_equal(h2, h2)
    assert_equal(h3, h3)
    assert_equal(h4, h4)
    assert_not_equal(h1, h2)
    assert_equal(h2, h3)
    assert_not_equal(h3, h4)
  end
    
      def test_freeze_dup
    set1 = SortedSet[1,2,3]
    set1.freeze
    set2 = set1.dup
    
        t = Time.at(10000000000000000000000)
    assert_equal('<<10000000000000000000000>>', t.strftime('<<%s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%24s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%024s>>'))
    assert_equal('<< 10000000000000000000000>>', t.strftime('<<%_24s>>'))
  end
    
    describe :string_unpack_Aa, shared: true do
  it 'decodes the number of bytes specified by the count modifier including NULL bytes' do
    'a\x00bc'.unpack(unpack_format(3)+unpack_format).should == ['a\x00b', 'c']
  end
    
        10.times { t.send(@method); Thread.pass }
    t.status.should_not == 'sleep'
    
      def participation_answer(user)
    poll_participations.find_by(author_id: user.person.id)
  end
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('ALLOW-FROM foo')
  end
    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker