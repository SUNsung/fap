
        
            should 'not filter entries within include' do
      includes = %w(_index.html .htaccess include*)
      files = %w(index.html _index.html .htaccess includeA)
    
    # Sample contents
WITHOUT_LIQUID = <<-TEXT.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. Etiam bibendum magna et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    require 'em-websocket'
    
    describe BottleSpecification do
  specify '#sha256' do
    checksums = {
      snow_leopard_32: 'deadbeef' * 8,
      snow_leopard:    'faceb00c' * 8,
      lion:            'baadf00d' * 8,
      mountain_lion:   '8badf00d' * 8,
    }
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
        context 'with cookies set' do
      let(:specs) {
        {
          cookies: {
            coo: 'k/e',
            mon: 'ster',
          },
        }
      }
    
        def []=(name, value)
      @cookies[name.to_s] = value
      @send_cookies[name.to_s] = true
    end