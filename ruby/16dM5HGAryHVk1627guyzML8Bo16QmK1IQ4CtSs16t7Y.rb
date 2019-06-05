
        
            def parse_html(html)
      warn '#{self.class.name} is re-parsing the document' unless ENV['RACK_ENV'] == 'test'
      super
    end
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
          module ClassMethods
        def redirections
          @redirections
        end
    
            doc
      end
    end
  end
end

    
          # Returns the delta between this element's delimiter and the argument's.
      #
      # @note Pairs with different delimiter styles return a delta of 0
      #
      # @return [Integer] the delta between the two delimiters
      def delimiter_delta(other)
        HashElementDelta.new(self, other).delimiter_delta
      end
    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
          def main_sidebar_classes
        if cookies['sidebar-minimized'] == 'true'
          'col-3 col-md-2 sidebar'
        else
          'p-0 col-3 col-md-2 sidebar'
        end
      end
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
                respond_with(@order, default_template: :show, status: 201)
          else
            @order = Spree::Order.create!(user: current_api_user, store: current_store)
            if Cart::Update.call(order: @order, params: order_params).success?
              respond_with(@order, default_template: :show, status: 201)
            else
              invalid_resource!(@order)
            end
          end
        end
    
                result = complete_service.call(order: spree_current_order)
    
          @@stock_location_attributes = [
        :id, :name, :address1, :address2, :city, :state_id, :state_name,
        :country_id, :zipcode, :phone, :active
      ]
    
    # Create two output packages!
output_packages = []
output_packages << pleaserun.convert(FPM::Package::RPM)
output_packages << pleaserun.convert(FPM::Package::Deb)
    
        # Provide any template values as methods on the package.
    if template_scripts?
      template_value_list.each do |key, value|
        (class << output; self; end).send(:define_method, key) { value }
      end
    end
    
        File.expand_path(output_path).tap do |path|
      ::Dir.chdir(build_path) do
        safesystem(*([tar_cmd,
                      compression_option,
                      '-cf',
                      path] + data_tar_flags + \
                      ::Dir.entries('.').reject{|entry| entry =~ /^\.{1,2}$/ }))
      end
    end
  end # def output
    
        php_bin = attributes[:pear_php_bin] || '/usr/bin/php'
    logger.info('Setting php_bin', :php_bin => php_bin)
    safesystem('pear', '-c', config, 'config-set', 'php_bin', php_bin)
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end