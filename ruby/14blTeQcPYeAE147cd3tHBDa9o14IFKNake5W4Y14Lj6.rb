
        
          def present_hash(hash, skip_key = nil)
    hash.to_a.sort_by {|a| a.first.to_s }.map { |k, v| '#{k}: #{v}' unless k.to_s == skip_key.to_s }.compact
  end
end

    
      included do
    include Oauthable
    
      def validate_option(method)
    if self.respond_to? 'validate_#{method}'.to_sym
      self.send('validate_#{method}'.to_sym)
    else
      false
    end
  end
    
      def destroy
    @event.destroy