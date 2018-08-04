
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
        assert_equal 2, new_clients.size
    assert_equal 'changed', new_clients.first.name
    assert_equal 'changed', new_clients.last.name
  end
    
          assert_equal expected, @pirate.ship_log
    end
  end
    
      has_one :account, foreign_key: 'firm_id', dependent: :destroy, validate: true
  has_one :unvalidated_account, foreign_key: 'firm_id', class_name: 'Account', validate: false
  has_one :account_with_select, -> { select('id, firm_id') }, foreign_key: 'firm_id', class_name: 'Account'
  has_one :readonly_account, -> { readonly }, foreign_key: 'firm_id', class_name: 'Account'
  # added order by id as in fixtures there are two accounts for Rails Core
  # Oracle tests were failing because of that as the second fixture was selected
  has_one :account_using_primary_key, -> { order('id') }, primary_key: 'firm_id', class_name: 'Account'
  has_one :account_using_foreign_and_primary_keys, foreign_key: 'firm_name', primary_key: 'name', class_name: 'Account'
  has_one :account_with_inexistent_foreign_key, class_name: 'Account', foreign_key: 'inexistent'
  has_one :deletable_account, foreign_key: 'firm_id', class_name: 'Account', dependent: :delete
    
            assert_equal 'action_cable/User#lifo', pubsub_call[:channel]
        assert_instance_of Proc, pubsub_call[:callback]
      end
    end
  end
    
      describe '.find' do
    it 'uses the client to get a single key' do
      mock_client_response(:get_key) do
        {
          keyId: 'some-key-id'
        }
      end
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
        self.links = {
      home: 'https://secure.php.net/',
      code: 'https://git.php.net/?p=php-src.git;a=summary'
    }
    
        version 'Guide' do
      self.base_url = 'https://www.tensorflow.org/'
      self.root_path = 'get_started/get_started'
      self.initial_paths = %w(
        programmers_guide/reading_data
        tutorials/mandelbrot
        performance/performance_guide
        deploy/hadoop
        extend/architecture)
    
      before do
    routes.draw { get 'show' => 'anonymous#show' }
  end
    
            boundaries.each do |range|
          unless valid_ip_or_range?(range)
            errors.add(:boundary, 'must be a valid IP range')
          end
        end
      end
    end
    
        res << inp.to_html
  end
  res << '</form>'
end
    
        # Returns the Sass/SCSS code for the media query.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      src = ''
      src << Sass::Media._interp_to_src(modifier, options)
      src << ' ' unless modifier.empty?
      src << Sass::Media._interp_to_src(type, options)
      src << ' and ' unless type.empty? || expressions.empty?
      src << expressions.map do |e|
        Sass::Media._interp_to_src(e, options)
      end.join(' and ')
      src
    end