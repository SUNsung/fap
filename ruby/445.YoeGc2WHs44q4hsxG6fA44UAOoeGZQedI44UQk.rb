
        
        module Jekyll
  module Drops
    class SiteDrop < Drop
      extend Forwardable
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          option :secret, nil
      option :algorithm, 'HS256'
      option :uid_claim, 'email'
      option :required_claims, %w(name email)
      option :info_map, { name: 'name', email: 'email' }
      option :auth_url, nil
      option :valid_within, nil
    
            def diff_file_with_new_path(new_path)
          diff_files.find { |diff_file| diff_file.new_path == new_path }
        end
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
          def initialize(*)
        super
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
          def base_url
        @base_url
      end
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
        # Remove all slashes from the start of string.
    # Remove all double slashes
    def clean_url url
      return url if url.nil?
      url.gsub('%2F', '/').gsub(/^\/+/, '').gsub('//', '/')
    end
    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)
    
        def cache_key_for_products
      count = @products.count
      max_updated_at = (@products.maximum(:updated_at) || Date.today).to_s(:number)
      products_cache_keys = 'spree/products/all-#{params[:page]}-#{max_updated_at}-#{count}'
      (common_product_cache_keys + [products_cache_keys]).compact.join('/')
    end
    
    module Spree
  class ReturnItem::EligibilityValidator::Default < Spree::ReturnItem::EligibilityValidator::BaseValidator
    class_attribute :permitted_eligibility_validators
    self.permitted_eligibility_validators = [
      ReturnItem::EligibilityValidator::OrderCompleted,
      ReturnItem::EligibilityValidator::TimeSincePurchase,
      ReturnItem::EligibilityValidator::RMARequired,
      ReturnItem::EligibilityValidator::InventoryShipped,
      ReturnItem::EligibilityValidator::NoReimbursements
    ]
    
        unreturned_return_items.group_by(&:exchange_shipments).each do |shipments, return_items|
      original_order = shipments.first.order
      order_attributes = {
        bill_address: original_order.bill_address,
        ship_address: original_order.ship_address,
        email: original_order.email
      }
      order_attributes[:store_id] = original_order.store_id
      order = Spree::Order.create!(order_attributes)
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def show
          @option_value = scope.find(params[:id])
          respond_with(@option_value)
        end
    
            def update
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update_attributes_and_order(shipment_params)
    
      steps %{
    And I turn off class caching
    And I write to 'Gemfile' with:
      '''
      source 'http://rubygems.org'
      gem 'rails', '#{framework_version}'
      gem 'sqlite3', :platform => [:ruby, :rbx]
      gem 'activerecord-jdbcsqlite3-adapter', :platform => :jruby
      gem 'jruby-openssl', :platform => :jruby
      gem 'capybara'
      gem 'gherkin'
      gem 'aws-sdk-s3'
      gem 'racc', :platform => :rbx
      gem 'rubysl', :platform => :rbx
      '''
    And I remove turbolinks
    And I comment out lines that contain 'action_mailer' in 'config/environments/*.rb'
    And I empty the application.js file
    And I configure the application to use 'paperclip' from this project
  }
    
    When /^(?:|I )follow '([^']*)'$/ do |link|
  click_link(link)
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
      context 'with ignore_hidden_fields' do
    before { Capybara.ignore_hidden_elements = true }
    
      post '/form' do
    self.class.form_post_count += 1
    '<pre id='results'>' + params[:form].merge('post_count' => self.class.form_post_count).to_yaml + '</pre>'
  end
    
        ##
    #
    # Yield a block using a specific session name or {Capybara::Session} instance.
    #
    def using_session(name_or_session)
      previous_session_info = {
        specified_session: specified_session,
        session_name: session_name,
        current_driver: current_driver,
        app: app
      }
      self.specified_session = self.session_name = nil
      if name_or_session.is_a? Capybara::Session
        self.specified_session = name_or_session
      else
        self.session_name = name_or_session
      end
      yield
    ensure
      self.session_name, self.specified_session = previous_session_info.values_at(:session_name, :specified_session)
      self.current_driver, self.app = previous_session_info.values_at(:current_driver, :app) if threadsafe
    end
    
        def extract_results(session)
      expect(session).to have_xpath('//pre[@id='results']')
      # YAML.load Nokogiri::HTML(session.body).xpath('//pre[@id='results']').first.inner_html.lstrip
      YAML.load Capybara::HTML(session.body).xpath('//pre[@id='results']').first.inner_html.lstrip
    end
    
        context 'when `true`' do
      it 'does not click on link which matches approximately' do
        @session.visit('/with_html')
        msg = 'Unable to find link or button 'abore''
        expect do
          @session.click_link_or_button('abore', exact: true)
        end.to raise_error(Capybara::ElementNotFound, msg)
      end
    
        it 'should wait for at least one match by default' do
      Capybara.using_wait_time(3) do
        @session.click_link('clickable')
        expect(@session.first(:css, 'a#has-been-clicked')).not_to be_nil
      end
    end
    
    require 'capybara/selector/filter_set'
require 'capybara/selector/css'
require 'capybara/selector/regexp_disassembler'
require 'capybara/selector/builders/xpath_builder'
require 'capybara/selector/builders/css_builder'