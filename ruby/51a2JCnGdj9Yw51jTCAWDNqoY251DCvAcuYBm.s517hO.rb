
        
              # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
            # This returns all the registered provider capabilities.
        #
        # @return [Hash]
        def provider_capabilities
          results = Hash.new { |h, k| h[k] = Registry.new }
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
      ALPHANUMERIC = [*'A'..'Z', *'a'..'z', *'0'..'9']
  # SecureRandom.alphanumeric generates a random alphanumeric string.
  #
  # The argument _n_ specifies the length, in characters, of the alphanumeric
  # string to be generated.
  #
  # If _n_ is not specified or is nil, 16 is assumed.
  # It may be larger in the future.
  #
  # The result may contain A-Z, a-z and 0-9.
  #
  #   require 'securerandom'
  #
  #   SecureRandom.alphanumeric     #=> '2BuBuLf3WfSKyQbR'
  #   SecureRandom.alphanumeric(10) #=> 'i6K93NdqiH'
  #
  # If a secure random number generator is not available,
  # +NotImplementedError+ is raised.
  def alphanumeric(n=nil)
    n = 16 if n.nil?
    choose(ALPHANUMERIC, n)
  end
end
    
      platform_is_not :windows do
    it 'returns true if the file is a pipe' do
      filename = tmp('i_am_a_pipe')
      File.mkfifo(filename)
    
        it 'normalizes line endings in text mode' do
      @io = new_io(@fname, 'wt')
      @io.write 'a\nb\nc'
      @io.close
      File.binread(@fname).should == 'a\r\nb\r\nc'
    end
    
            it 'returns true when they are the same with normalized case' do
          @upper_a_tilde.casecmp?(@lower_a_tilde).should == true
        end
    
          it 'updates string metadata for self' do
        upcased = 'aßet'
        upcased.upcase!
    
        it 'returns 1 if argument <=> self is not greater than 0 and is less than 0' do
      t = Time.now
      r = mock('r')
      r.should_receive(:>).with(0).and_return(false)
      r.should_receive(:<).with(0).and_return(true)
      obj = mock('time')
      obj.should_receive(:<=>).with(t).and_return(r)
      (t <=> obj).should == 1
    end
    
          specs.fooM1O1Q1(2,3,4).should == [2,3,4]
      specs.fooM1O1Q1(1,3).should == [1,2,3]
    
        it 'raises a NameError if the class variable is not defined' do
      lambda {
        @s.rb_cv_get(CApiClassSpecs::CVars, '@@no_cvar')
      }.should raise_error(NameError, /class variable @@no_cvar/)
    end
  end
    
    describe 'Net::HTTPResponse#error!' do
  it 'raises self's class 'EXCEPTION_TYPE' Exception' do
    res = Net::HTTPUnknownResponse.new('1.0', '???', 'test response')
    lambda { res.error! }.should raise_error(Net::HTTPError)
    
      def meta
    object.file.meta
  end
end

    
    class ManifestSerializer < ActiveModel::Serializer
  include RoutingHelper
  include ActionView::Helpers::TextHelper
    
    class DigestMailerWorker
  include Sidekiq::Worker
    
    asm = nil
File.open('h2b.com.dbg.in', 'rb') { |fd|
	asm = fd.read(fd.stat.size)
}
    
    meterp = Rex::Post::Meterpreter::Client.new(sock)
    
    #Rjb::load('.', jvmargs=[])
Rjb::load('#{ENV['JAVA_HOME']}/lib/tools.jar:.',jvmargs=[])
    
    require 'rubygems'
require 'rjb'
    
              def find_plugins_gem_specs
            @specs ||= ::Gem::Specification.find_all.select{|spec| logstash_plugin_gem_spec?(spec)}
          end