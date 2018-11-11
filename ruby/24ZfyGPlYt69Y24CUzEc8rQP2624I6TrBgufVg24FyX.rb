
        
        require 'formula'
require 'erb'
require 'ostruct'
require 'cli_parser'
require 'dev-cmd/audit'
require 'dev-cmd/bottle'
require 'dev-cmd/bump-formula-pr'
require 'dev-cmd/create'
require 'dev-cmd/edit'
require 'dev-cmd/extract'
require 'dev-cmd/formula'
require 'dev-cmd/irb'
require 'dev-cmd/linkage'
require 'dev-cmd/mirror'
require 'dev-cmd/prof'
require 'dev-cmd/pull'
require 'dev-cmd/release-notes'
require 'dev-cmd/ruby'
require 'dev-cmd/tap-new'
require 'dev-cmd/test'
require 'dev-cmd/tests'
require 'dev-cmd/update-test'
    
          # This allows generic Altivec PPC bottles to be supported in some
      # formulae, while also allowing specific bottles in others; e.g.,
      # sometimes a formula has just :tiger_altivec, other times it has
      # :tiger_g4, :tiger_g5, etc.
      def find_altivec_tag(tag)
        return unless tag.to_s =~ /(\w+)_(g4|g4e|g5)$/
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^the releases path is created$/) do
  run_vagrant_command(test_dir_exists(TestApp.releases_path))
end
    
    World(VagrantHelpers)

    
        def exit_because_of_exception(ex)
      if respond_to?(:deploying?) && deploying?
        exit_deploy_because_of_exception(ex)
      else
        super
      end
    end
    
      class Configuration
    def self.env
      @env ||= new
    end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
              if Spree::Cart::Update.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
          private
    
        # Sidekiq::Client normally uses the default Redis pool but you may
    # pass a custom ConnectionPool if you want to shard your
    # Sidekiq jobs across several Redis instances (for scalability
    # reasons, e.g.)
    #
    #   Sidekiq::Client.new(ConnectionPool.new { Redis.new })
    #
    # Generally this is only needed for very large Sidekiq installs processing
    # thousands of jobs per second.  I don't recommend sharding unless you
    # cannot scale any other way (e.g. splitting your app into smaller apps).
    def initialize(redis_pool=nil)
      @redis_pool = redis_pool || Thread.current[:sidekiq_via_pool] || Sidekiq.redis_pool
    end
    
          ObjectSpace.each_object(File) do |fp|
        begin
          if !fp.closed? && fp.stat.file? && fp.sync && (fp.fcntl(Fcntl::F_GETFL) & append_flags) == append_flags
            to_reopen << fp
          end
        rescue IOError, Errno::EBADF
        end
      end
    
          def initialize
        @entries = []
        yield self if block_given?
      end
    
          # Queue for this worker
      def queue
        self.sidekiq_options['queue']
      end