
        
              options[:only_patterns] = [/\Ad3[\-\w]+\z/, /\Ad3\/blob\/master\/changes\.md\z/i]
      options[:skip_patterns] = [/3\.x-api-reference/]
    
        html_filters.push 'haxe/clean_html', 'haxe/entries'
    
        options[:skip_patterns] = [/mysqlnd/, /xdevapi/i]
    
        private
    
        version '3' do
      self.release = '3.3.0'
      self.base_url = 'http://sinonjs.org/releases/v#{release}/'
    end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
        t = Time.utc(2016, 1, 1, 1, 0, 0).getlocal('-05:00')
    assert_equal('365', t.strftime('%j'))
    t = Time.utc(2017, 1, 1, 1, 0, 0).getlocal('-05:00')
    assert_equal('366', t.strftime('%j'))
  end
    
        def alive?
      @alive
    end
    
      it 'creates a time based on given C-style gmtime arguments, interpreted as UTC (GMT)' do
    time = Time.send(@method, 1, 15, 20, 1, 1, 2000, :ignored, :ignored, :ignored, :ignored)
    time.inspect.should == '2000-01-01 20:15:01 UTC'
  end
    
      # Set to :debug to see everything in the log.
  config.log_level = :info
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    namespace :bower do
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
      def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end
    
      def which_all(cmd)
    super(cmd, PATH.new(ORIGINAL_PATHS))
  end
    
        @user_count = User.count
    
    module Api
  module OpenidConnect
    class ClientsController < ApplicationController
      skip_before_action :verify_authenticity_token
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end