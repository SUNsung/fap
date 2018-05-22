
        
        puts 'Validating #{links.size} links...'
    
      def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
      def toggle_availability
    @service = current_user.services.find(params[:id])
    @service.toggle_availability!