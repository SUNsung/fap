
        
          # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
    require 'minitest/autorun'
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end