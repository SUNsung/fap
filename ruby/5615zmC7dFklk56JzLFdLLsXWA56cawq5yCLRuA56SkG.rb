
        
              if rest.start_with?('/window.')
        return redirect '/dom#{rest.sub('window.', 'window/')}', 301
      end
    
    module Docs
  require 'docs/core/autoload_helper'
  extend AutoloadHelper
    
        private
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
            css('pre.prettyprint').each do |node|
          node.content = node.content.strip
          node['data-language'] = 'dart' if node['class'].include?('dart')
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('class')
        end
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
      def set_statuses
    @statuses = scope_for_collection
    @statuses = cache_collection(@statuses, Status)
  end
    
        def create
      authorize AccountModerationNote, :create?
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
        head 200
  end