
        
          #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
      def hangup
    self.client.send_hangup(self)
    self.state = :hangup
    true
  end
    
              private
    
    When /^I fill out forgot password form with '([^']*)'$/ do |email|
  fill_forgot_password_form(email)
end
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
    module Spree
  module Api
    class BaseController < ActionController::Base
      protect_from_forgery unless: -> { request.format.json? || request.format.xml? }
    
            def index
          @properties = Spree::Property.accessible_by(current_ability, :read)
    
            def show
          @stock_item = scope.find(params[:id])
          respond_with(@stock_item)
        end
    
            def store_params
          params.require(:store).permit(permitted_store_attributes)
        end
      end
    end
  end
end

    
              @users = @users.result.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@users)
        end
    
            def update
          authorize! :update, zone
          if zone.update_attributes(zone_params)
            respond_with(zone, status: 200, default_template: :show)
          else
            invalid_resource!(zone)
          end
        end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
      end
    
    
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end