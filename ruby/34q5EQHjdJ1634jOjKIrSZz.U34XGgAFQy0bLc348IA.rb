
        
          def test_escape_javascript_with_safebuffer
    given = %('quoted' 'double-quoted' new-line:\n </closed>)
    expect = %(\\'quoted\\' \\'double-quoted\\' new-line:\\n <\\/closed>)
    assert_equal expect, escape_javascript(given)
    assert_equal expect, escape_javascript(ActiveSupport::SafeBuffer.new(given))
    assert_instance_of String, escape_javascript(given)
    assert_instance_of ActiveSupport::SafeBuffer, escape_javascript(ActiveSupport::SafeBuffer.new(given))
  end
    
      def redirect_back_with_status
    redirect_back(fallback_location: '/things/stuff', status: 307)
  end
    
      test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
          # Declares one or more attributes that will be given both class and instance accessor methods.
      def attribute(*names)
        generated_attribute_methods.module_eval do
          names.each do |name|
            define_method(name) do
              attributes[name.to_sym]
            end
    
      private
    def expected_helper_methods
      TestHelper.instance_methods
    end
    
        test 'head :switching_protocols (101) does not return a content-type header' do
      headers = HeadController.action(:switching_protocols).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
    ActionMailer::LogSubscriber.attach_to :action_mailer

    
        # Access the mailer instance.
    def mailer
      @_controller
    end
    
        class DeliveryJob < ActionMailer::DeliveryJob # :nodoc:
      def perform(mailer, mail_method, delivery_method, params, *args)
        mailer.constantize.with(params).public_send(mail_method, *args).send(delivery_method)
      end
    end
  end
end

    
      class AssertMultipartSelectMailer < ActionMailer::Base
    def test(options)
      mail subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>' do |format|
        format.text { render plain: options[:text] }
        format.html { render plain: options[:html] }
      end
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain a second target as its test target
      #
      # @return [String] the text for the target module
      #
      def template_contents(path, prefix, fallback)
        if path.exist?
          path.read.chomp.lines.map { |line| '#{prefix}#{line}' }.join('\n')
        else
          '#{prefix}# #{fallback}'
        end
      end
    end
  end
end

    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
      # DELETE /books/1
  # DELETE /books/1.json
  def destroy
    @book.destroy
    respond_to do |format|
      format.html { redirect_to books_url, notice: 'Book was successfully destroyed.' }
      format.json { head :no_content }
    end
  end
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
              arguments.each_with_index do |argument, index|
            optarg_positions << index if argument.optarg_type?
            arg_positions << index if argument.arg_type?
          end