
        
            it 'returns a complex number if self is negative and the passed argument is not 0' do
      (Rational(-3, 2) ** 1.5).should be_close(Complex(0.0, -1.8371173070873836), TOLERANCE)
      (Rational(3, -2) ** 1.5).should be_close(Complex(0.0, -1.8371173070873836), TOLERANCE)
      (Rational(3, -2) ** -1.5).should be_close(Complex(0.0, 0.5443310539518174), TOLERANCE)
    end
    
        it 'evaluates the second conditions lazily with exclusive-end range' do
      collector = proc { |i| ScratchPad << i }
      eval '10.times { |i| i if (i == 4)..collector[i] }'
      ScratchPad.recorded.should == [4]
    end
    
    describe 'CApiWrappedTypedStruct' do
  before :each do
    @s = CApiWrappedTypedStructSpecs.new
  end
    
      ##
  # Gem::Security default exception type
    
      def test_fetch_unmodified
    uri = URI.parse '#{@gem_repo}/specs.#{Gem.marshal_version}'
    t = Time.utc(2013, 1, 2, 3, 4, 5)
    conn, response = util_stub_net_http(:body => '', :code => 304) do |c|
      @request = make_request(uri, Net::HTTP::Get, t, nil)
      [c, @request.fetch]
    end
    
          Tempfile.create('test_webrick_auth') {|tmpfile|
        tmpfile.close
        tmp_pass = WEBrick::HTTPAuth::Htdigest.new(tmpfile.path)
        tmp_pass.set_passwd(realm, 'webrick', 'supersecretpassword')
        tmp_pass.set_passwd(realm, 'foo', 'supersecretpassword')
        tmp_pass.flush
    }
    
          ##
      # Retrieves a password from the database for +user+ in +realm+.  If
      # +reload_db+ is true the database will be reloaded first.
    
    
    {        (candidates|ReservedWords).grep(/^#{Regexp.quote(input)}/)
      end
    }
    
    class Dir
  def self.mktmpdir(path)
    path = File.join(tmpdir, path+'-#{$$}-#{rand(100000)}')
    begin
      mkdir(path)
    rescue Errno::EEXIST
      path.succ!
      retry
    end
    path
  end unless respond_to?(:mktmpdir)
end
    
      in_temporary_working_directory(dir) {
    exec_test pathes
  }
end
    
        nr_threads.times do |i|
      if (i != 0)
        mutex.unlock
      end
      threads[i] = Thread.new do
        mutex.synchronize do
          condvar.wait mutex
        end
      end
      mutex.lock
    end
    
    GEMFILE_EXTENSIONS = [
    '.local',
    ''
]
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
      config.webfinger_http_fallback = Rails.env == 'development'
    
    class Services::Facebook < Service
  include Rails.application.routes.url_helpers
    
          post_params = @service.create_post_params(@status_message)
      expect(post_params[:message]).to include 'http:'
    end