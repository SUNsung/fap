
        
        module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
          # Sets a key to the given integer but only if the existing value is
      # smaller than the given value.
      #
      # This method uses a Lua script to ensure the read and write are atomic.
      #
      # raw_key - The key to set.
      # value - The new value for the key.
      # timeout - The key timeout in seconds.
      #
      # Returns true when the key was overwritten, false otherwise.
      def self.write_if_greater(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
        val = Redis::Cache.with do |redis|
          redis
            .eval(WRITE_IF_GREATER_SCRIPT, keys: [key], argv: [value, timeout])
        end
    
    module Gitlab
  module GithubImport
    module Representation
      class Issue
        include ToHash
        include ExposeAttribute
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
      describe '#sort_tuples!' do
    let(:tuples) {
      time = Time.now
      [
        [2, 'a', time - 1],  # 0
        [2, 'b', time - 1],  # 1
        [1, 'b', time - 1],  # 2
        [1, 'b', time],      # 3
        [1, 'a', time],      # 4
        [2, 'a', time + 1],  # 5
        [2, 'a', time],      # 6
      ]
    }
    
        it 'requires a message' do
      @log.message = ''
      expect(@log).not_to be_valid
      @log.message = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:message)
    end
    
    def to_char(c)
  '0123456789BFiuz'.slice(to_integer(c))
end
    
        if processes.stdout.lines.any? { |line| line =~ %r{^\d+\t\d\tcom.apple.SafariNotificationAgent$} }
      system_command '/usr/bin/killall', args: ['-kill', 'SafariNotificationAgent']
    end
    
    World(RemoteCommandHelpers)

    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
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
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
          private
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
                expect(order.shipments.count).to eq(2)
            expect(order.shipments.last.backordered?).to eq(false)
            expect(order.shipments.first.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
            expect(order.shipments.last.inventory_units_for(product.master).sum(&:quantity)).to eq(1)
          end
    
            def normalize_params
          params[:order][:payments_attributes] = params[:order].delete(:payments) if params[:order][:payments]
          params[:order][:shipments_attributes] = params[:order].delete(:shipments) if params[:order][:shipments]
          params[:order][:line_items_attributes] = params[:order].delete(:line_items) if params[:order][:line_items]
          params[:order][:ship_address_attributes] = params[:order].delete(:ship_address) if params[:order][:ship_address]
          params[:order][:bill_address_attributes] = params[:order].delete(:bill_address) if params[:order][:bill_address]
        end