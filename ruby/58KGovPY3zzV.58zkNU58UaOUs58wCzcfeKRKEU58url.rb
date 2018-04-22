
        
        #
    
    require 'erb'
    
        @status
  end
    
        def initialize(username, domain)
      @username = username
      @domain = domain
    end
    
        def minor
      3
    end
    
      def meta
    object.file.meta
  end
end

    
      describe 'for a silence with reject media' do
    before do
      subject.call(DomainBlock.create!(domain: 'evil.org', severity: :silence, reject_media: true))
    end
    
    ###
### methods
###
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
        { # yes, this is ugly, feel free to change that
      '/..' => '/', '/a/../b' => '/b', '/a/../b/' => '/b/', '/a/.' => '/a/',
      '/%2e.' => '/', '/a/%2E%2e/b' => '/b', '/a%2f%2E%2e%2Fb/' => '/b/',
      '//' => '/', '/%2fetc%2Fpasswd' => '/etc/passwd'
    }.each do |a, b|
      it('replaces #{a.inspect} with #{b.inspect}') { expect(get(a).body).to eq(b) }
    end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
      it 'should not leak changes to env' do
    klass    = described_class
    detector = Struct.new(:app) do
      def call(env)
        was = env.dup
        res = app.call(env)
        was.each do |k,v|
          next if env[k] == v
          fail 'env[#{k.inspect}] changed from #{v.inspect} to #{env[k].inspect}'
        end
        res
      end
    end