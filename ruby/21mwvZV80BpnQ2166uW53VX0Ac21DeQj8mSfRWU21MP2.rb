
        
            def matching_domain
      if domain.nil?
        Account.where(domain: nil)
      else
        Account.where(Account.arel_table[:domain].lower.eq domain.to_s.downcase)
      end
    end
  end
end

    
      attributes :id, :type, :name, :updated
    
      sidekiq_options queue: 'mailers'