
        
          has_many :special_categories_with_conditions, -> { where(categorizations: { special: true }) }, through: :categorizations, source: :category
  has_many :nonspecial_categories_with_conditions, -> { where(categorizations: { special: false }) }, through: :categorizations, source: :category
    
    class Book < ActiveRecord::Base
  belongs_to :author
    
          def with_module
        render inline: 'Module <%= included_method %>'
      end
    end
    
        self.conn_threads = []
    self.listener_threads = []
    self.listener_pairs = {}
  end
    
      #
  # Determine the maximum amount of space required for the features requested
  #
  def required_space
    # Start with our cached default generated size
    space = cached_size
    
      CachedSize = 616
    
      # List of known values and models
  def devices_list
    known_devices = {
        :'AZ-D140W'=>
            {:name=>'Azmoon', :model=>'AZ-D140W', :values=>[
                [107367693, 13]
            ]},
        :'BiPAC 5102S'=>
            {:name=>'Billion', :model=>'BiPAC 5102S', :values=>[
                [107369694, 13]
            ]},
        :'BiPAC 5200'=>
            {:name=>'Billion', :model=>'BiPAC 5200', :values=>[
                [107369545, 9],
                [107371218, 21]
            ]},
        :'BiPAC 5200A'=>
            {:name=>'Billion', :model=>'BiPAC 5200A', :values=>[
                [107366366, 25],
                [107371453, 9]
            ]},
        :'BiPAC 5200GR4'=>
            {:name=>'Billion', :model=>'BiPAC 5200GR4', :values=>[
                [107367690, 21]
            ]},
        :'BiPAC 5200SRD'=>
            {:name=>'Billion', :model=>'BiPAC 5200SRD', :values=>[
                [107368270, 1],
                [107371378, 3],
                [107371218, 13]
            ]},
        :'DSL-2520U'=>
            {:name=>'D-Link', :model=>'DSL-2520U', :values=>[
                [107368902, 25]
            ]},
        :'DSL-2600U'=>
            {:name=>'D-Link', :model=>'DSL-2600U', :values=>[
                [107366496, 13],
                [107360133, 20]
            ]},
        :'TD-8616'=>
            {:name=> 'TP-Link', :model=>'TD-8616', :values=>[
                [107371483, 21],
                [107369790, 17],
                [107371161, 1],
                [107371426, 17],
                [107370211, 5],
            ]},
        :'TD-8817'=>
            {:name=> 'TP-Link', :model=>'TD-8817', :values=>[
                [107369790, 17],
                [107369788, 1],
                [107369522, 25],
                [107369316, 21],
                [107369321, 9],
                [107351277, 20]
            ]},
        :'TD-8820'=>
            {:name=>'TP-Link', :model=>'TD-8820', :values=>[
                [107369768, 17]
            ]},
        :'TD-8840T'=>
            {:name=>'TP-Link', :model=>'TD-8840T', :values=>[
                [107369845, 5],
                [107369790, 17],
                [107369570, 1],
                [107369766, 1],
                [107369764, 5],
                [107369688, 17]
            ]},
        :'TD-W8101G'=>
            {:name=>'TP-Link', :model=>'TD-W8101G', :values=>[
                [107367772, 37],
                [107367808, 21],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367052, 25],
                [107365835, 1]
            ]},
        :'TD-W8151N'=>
            {:name=>'TP-Link', :model=>'TD-W8151N', :values=>[
                [107353867, 24]
            ]},
        :'TD-W8901G'=>
            {:name=> 'TP-Link', :model=>'TD-W8901G', :values=>[
                [107367787, 21],
                [107368013, 5],
                [107367854, 9],
                [107367751, 21],
                [107367749, 13],
                [107367765, 25],
                [107367682, 21],
                [107365835, 1],
                [107367052, 25]
            ]},
        :'TD-W8901GB'=>
            {:name=>'TP-Link', :model=>'TD-W8901GB', :values=>[
                [107367756, 13],
                [107369393, 21]
            ]},
        :'TD-W8901N'=>
            {:name=>'TP-Link', :model=>'TD-W8901N', :values=>[
                [107353880, 0]
            ]},
        :'TD-W8951ND'=>
            {:name=>'TP-Link', :model=>'TD-W8951ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107366743, 21],
                [107364759, 25],
                [107364759, 13],
                [107364760, 21]
            ]},
        :'TD-W8961NB'=>
            {:name=>'TP-Link', :model=>'TD-W8961NB', :values=>[
                [107369844, 17],
                [107367629, 21],
                [107366421, 13]
            ]},
        :'TD-W8961ND'=>
            {:name=>'TP-Link', :model=>'TD-W8961ND', :values=>[
                [107369839, 25],
                [107369876, 13],
                [107364732, 25],
                [107364771, 37],
                [107364762, 29],
                [107353880, 0],
                [107353414, 36]
            ]},
        :'P-660R-T3 v3'=> #This value works on devices with model P-660R-T3 v3 not P-660R-T3 v3s
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'P-660RU-T3 v2'=> #Couldn't verify this
            {:name=>'ZyXEL', :model=>'P-660R-T3', :values=>[
                [107369567, 21]
            ]},
        :'ALL'=> # Used when `ForceAttempt` === true
            {:name=>'Unknown', :model=>'Forced', :values=>[]
            },
    }
    # collect all known cookies for a brute force option
    all_cookies = []
    known_devices.collect { |_, v| v[:values] }.each do |list|
      all_cookies += list
    end
    known_devices[:'ALL'][:values] = all_cookies.uniq
    known_devices
  end
    
    def BigDecimal.new(*args, **kwargs)
  return BigDecimal(*args) if kwargs.empty?
  BigDecimal(*args, **kwargs)
end
# Remove bigdecimal warning - end
    
        block.call(data_service) if !data_service.nil? && self.active
  end
    
          ])
    
      bins.each do |from, to|
    next if (from != 'metsvc.exe' and remove)
    to ||= from
    print_status(' >> Uploading #{from}...')
    fd = client.fs.file.new(tempdir + '\\' + to, 'wb')
    path = (from == 'metsrv.x86.dll') ? MetasploitPayloads.meterpreter_path('metsrv','x86.dll') : File.join(based, from)
    fd.write(::File.read(path, ::File.size(path)))
    fd.close
  end
    
        # .y file from csspool gem
    
        assert_equal [@parent, @xref_data], parents
  end
    
        m1_k1 = m1.add_class RDoc::NormalClass, 'Klass1'
    
      def test_http_url
    assert_equal 'prefix/path/top_level_rb.html', @top_level.http_url('prefix')
  end
    
    
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {
    {  def test_vi_end_word
    input_keys('aaa   b{b}}}b   ccc\C-[0')
    assert_byte_pointer_size('')
    assert_cursor(0)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aa')
    assert_cursor(2)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   ')
    assert_cursor(6)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b')
    assert_cursor(7)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{')
    assert_cursor(8)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}')
    assert_cursor(11)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}')
    assert_cursor(12)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
    input_keys('e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
    input_keys('03e')
    assert_byte_pointer_size('aaa   b')
    assert_cursor(7)
    assert_cursor_max(19)
    input_keys('3e')
    assert_byte_pointer_size('aaa   b{b}}}')
    assert_cursor(12)
    assert_cursor_max(19)
    input_keys('3e')
    assert_byte_pointer_size('aaa   b{b}}}b   cc')
    assert_cursor(18)
    assert_cursor_max(19)
  end
    
      def test_append_after
    assert_equal(Reline::KillRing::State::FRESH, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('a')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.append('b')
    assert_equal(Reline::KillRing::State::CONTINUED, @kill_ring.instance_variable_get(:@state))
    @kill_ring.process
    assert_equal(Reline::KillRing::State::PROCESSED, @kill_ring.instance_variable_get(:@state))
    assert_equal('ab', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal('ab', @kill_ring.yank)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['ab', 'ab'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
    assert_equal(['ab', 'ab'], @kill_ring.yank_pop)
    assert_equal(Reline::KillRing::State::YANK, @kill_ring.instance_variable_get(:@state))
  end
    
      # Defines which key will be used when confirming an account
  # config.confirmation_keys = [ :email ]
    
      def html_safe_string_from_session_array(key)
    return '' unless session[key].present?
    return '' unless session[key].respond_to?(:join)
    value = session[key].join(', ').html_safe
    session[key] = nil
    value
  end
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
          diff   = variant.amount_in(current_currency) - product_amount
      amount = Spree::Money.new(diff.abs, currency: current_currency).to_html
      label  = diff > 0 ? :add : :subtract
      '(#{Spree.t(label)}: #{amount})'.html_safe
    end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def find_product
          super(params[:product_id])
        end
    
            def update
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update_attributes_and_order(shipment_params)
    
            def get_store
          @store = Store.find(params[:id])
        end
    
            def update
          authorize! :update, taxonomy
          if taxonomy.update(taxonomy_params)
            respond_with(taxonomy, status: 200, default_template: :show)
          else
            invalid_resource!(taxonomy)
          end
        end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
    