
        
        Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
TEXT
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
          def message
        'The following attribute(s) is (are) missing on your model: #{@attributes.join(', ')}'
      end
    end
    
      def test_param_seq
    m = RDoc::AnyMethod.new nil, 'method'
    m.parent = @c1
    m.params = 'a'
    
        @a.singleton = true
    assert_equal 'class', @a.type
  end
    
        assert @co.ignored?
  end
    
        # C4 ref inside a C4 containing a C4 should resolve to the contained class
    assert_ref @c4_c4, 'C4'
  end
    
        m1_k3 = m1.add_class RDoc::NormalClass, 'Klass3'
    
        @parent = self
    @path = '/index.html'
    @symbols = {}
  end
    
        @generator = RDoc::Generator::POT.new @store, @options
    
    end

    
      def translate(raw)
    text = RDoc::I18n::Text.new(raw)
    text.translate(locale)
  end
    
        assert_equal expected, doc
  end
    
        assert_empty @d
    
        assert_equal 'link', scheme
    assert_equal '#foo', url
    assert_nil   id
    
        def duplicate_setting?(base_hash, derived_hash, key, inherited_file)
      return false if inherited_file.nil? # Not inheritance resolving merge
      return false if inherited_file.start_with?('..') # Legitimate override
      return false if base_hash[key] == derived_hash[key] # Same value
      return false if remote_file?(inherited_file) # Can't change
    
      def print_cops_of_department(cops, department, config)
    selected_cops = cops_of_department(cops, department)
    content = +'# #{department}\n'
    selected_cops.each do |cop|
      content << print_cop_with_doc(cop, config)
    end
    file_name = '#{Dir.pwd}/manual/cops_#{department.downcase}.md'
    File.open(file_name, 'w') do |file|
      puts '* generated #{file_name}'
      file.write(content.strip + '\n')
    end
  end
    
            expect(cop.messages)
          .to eq(['Extra empty line detected at block body end.'])
      end
    
              while total < 100
            total += 1
            foo += 1
            ^^^ Useless assignment to variable - `foo`.
          end
    
                expect(new_source).to eq(expected_each_with_range)
          end
    
          # Checks whether the `block` literal is delimited by `do`-`end` keywords.
      #
      # @return [Boolean] whether the `block` literal is enclosed in `do`-`end`
      def keywords?
        loc.end&.is?('end')
      end
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin&.is?('do')
      end
    
          # Calls the given block for each `key` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_key
        return pairs.map(&:key).to_enum unless block_given?
    
          # Checks whether the method name matches the argument.
      #
      # @param [Symbol, String] name the method name to check for
      # @return [Boolean] whether the method name matches the argument
      def method?(name)
        method_name == name.to_sym
      end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
          def order_id
        '#{order.number}-#{@payment.number}'
      end
    
          def gateway_options
        order.reload
        gateway_options_class.new(self).to_hash
      end
    
              context 'when the order's tax zone is a zone with VAT outside the default zone' do
            let(:other_vat_zone) { create(:zone_with_country) }
            let!(:other_vat) do
              create :tax_rate,
                     included_in_price: true,
                     zone: other_vat_zone,
                     amount: 0.3,
                     tax_category: shipping_method.tax_category
            end
    
          def api_key
        request.headers['X-Spree-Token'] || params[:token]
      end
      helper_method :api_key
    
            def shipment_params
          if params[:shipment] && !params[:shipment].empty?
            params.require(:shipment).permit(permitted_shipment_attributes)
          else
            {}
          end
        end
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'ru,en')
    assert_equal 'ru', obj.locale
    
      it 'should remove dead jobs older than Sidekiq::DeadSet.timeout' do
    Sidekiq::DeadSet.stub(:timeout, 10) do
      Time.stub(:now, Time.now - 11) do
        dead_set.kill(Sidekiq.dump_json(jid: '000103', class: 'MyWorker3', args: [])) # the oldest
      end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
      it 'allows delayed scheduling of AR class methods' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    MyModel.delay_for(5.days).long_class_method
    assert_equal 1, ss.size
  end
    
      describe 'error handling' do
    it 'deals with user-specified error handlers which raise errors' do
      output = capture_logging do
        begin
          Sidekiq.error_handlers << proc {|x, hash|
            raise 'boom'
          }
          cli = Sidekiq::CLI.new
          cli.handle_exception(RuntimeError.new('hello'))
        ensure
          Sidekiq.error_handlers.pop
        end
      end
      assert_includes output, 'boom'
      assert_includes output, 'ERROR'
    end
  end
    
      it 'can execute a job' do
    DirectWorker.execute_job(DirectWorker.new, [2, 3])
  end
    
    Sidekiq::Extensions.enable_delay!
