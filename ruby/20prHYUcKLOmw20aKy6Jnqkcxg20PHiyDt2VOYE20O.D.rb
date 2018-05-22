
        
              def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
          # Adds a new delivery method through the given class using the given
      # symbol as alias and the default options supplied.
      #
      #   add_delivery_method :sendmail, Mail::Sendmail,
      #     location:  '/usr/sbin/sendmail',
      #     arguments: '-i'
      def add_delivery_method(symbol, klass, default_options = {})
        class_attribute(:'#{symbol}_settings') unless respond_to?(:'#{symbol}_settings')
        send(:'#{symbol}_settings=', default_options)
        self.delivery_methods = delivery_methods.merge(symbol.to_sym => klass).freeze
      end
    
      def setup
    super
    ActionMailer::LogSubscriber.attach_to :action_mailer
  end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
      def toggle_availability
    @service = current_user.services.find(params[:id])
    @service.toggle_availability!
    
          assert_equal(true, set >= klass[1,2,3], klass.name)
      assert_equal(true, set >= klass[1,2], klass.name)
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
          def run
        update_if_necessary!
    
      puts '\n== Removing old logs and tempfiles =='
  system 'rm -f log/*'
  system 'rm -rf tmp/cache'