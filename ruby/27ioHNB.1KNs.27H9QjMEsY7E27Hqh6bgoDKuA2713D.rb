
    # This will hold a lock to the index so it can be read or updated.
    def with_index_lock
      lock_path = '#{@index_file}.lock'
      File.open(lock_path, 'w+') do |f|
        f.flock(File::LOCK_EX)
        yield
      end
    end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
              result
        end
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
              # Determine if we require a local Vagrant environment. There are
          # two cases that we require a local environment:
          #
          #   * We're asking for ANY/EVERY VM (no names given).
          #
          #   * We're asking for specific VMs, at least once of which
          #     is NOT in the local machine index.
          #
          requires_local_env = false
          requires_local_env = true if names.empty?
          requires_local_env ||= names.any? { |n|
            !@env.machine_index.include?(n)
          }
          raise Errors::NoEnvironmentError if requires_local_env && !@env.root_path
    
            # This contains all the hosts and their parents.
        #
        # @return [Registry<Symbol, Array<Class, Symbol>>]
        attr_reader :hosts
    
        using Magic
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
        assert_equal 'http://example.org/foo/Home', last_response.headers['Location']
    
      test 'uri encode' do
    c = '한글'
    assert_equal '%ED%95%9C%EA%B8%80', encodeURIComponent(c)
    assert_equal '%ED%95%9C%EA%B8%80', CGI::escape(c)
  end
end
    
          within_row(2) { click_icon :split }
      targetted_select2 'LA(#{order.reload.shipments.last.number})', from: '#s2id_item_stock_location'
      click_icon :save
      wait_for_ajax
      expect(page.find('#shipment_#{order.reload.shipments.last.id}')).to be_present
    end
  end
end

    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
              if @product.persisted?
            respond_with(@product, status: 201, default_template: :show)
          else
            invalid_resource!(@product)
          end
        end
    
              def serialize_shipping_rates(shipments)
            shipping_rates_serializer.new(
              shipments,
              include: [:shipping_rates],
              params: { show_rates: true }
            ).serializable_hash
          end
        end
      end
    end
  end
end

    
      <h3>Messages</h3>
  <% @messages.each do |msg| %>
    <p><%= msg %></p>
  <% end %>

    
      # Tell Action Mailer not to deliver emails to the real world.
  # The :test delivery method accumulates sent emails in the
  # ActionMailer::Base.deliveries array.
  config.action_mailer.delivery_method = :test
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
    module Jekyll
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
          @command.dependencies.tap do |dependencies|
        # Verify dependencies don't include commas (#257)
        dependencies.each do |dep|
          next unless dep.include?(',')
          splitdeps = dep.split(/\s*,\s*/)
          @messages << 'Dependencies should not ' \
            'include commas. If you want to specify multiple dependencies, use ' \
            'the '-d' flag multiple times. Example: ' + \
            splitdeps.map { |d| '-d '#{d}'' }.join(' ')
        end
      end
    
      # This method removes excluded files from the staging_path. Subclasses can
  # remove the files during the input phase rather than deleting them here
  def exclude
    return if attributes[:excludes].nil?
    
        ret = candidate_ret
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)