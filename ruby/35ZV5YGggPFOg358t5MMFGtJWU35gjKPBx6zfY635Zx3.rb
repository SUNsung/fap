
        
            find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
    class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
      def respond_with_navigational(*args, &block)
    respond_with(*args) do |format|
      format.any(*navigational_formats, &block)
    end
  end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end