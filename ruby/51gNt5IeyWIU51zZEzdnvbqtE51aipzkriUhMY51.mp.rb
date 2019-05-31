
        
            change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
          it 'should be catched when it means that the target is not found' do
        post :create, params: {post_id: -1}, format: :json
        expect(response.code).to eq('422')
      end
    
          it 'it doesn't call toggle_hidden_shareable' do
        expect(@controller.current_user).not_to receive(:toggle_hidden_shareable).with(an_instance_of(StatusMessage))
        begin
          put :update, params: {id: 42, post_id: @status.id}, format: :js
        rescue ActiveRecord::RecordNotFound
        end
      end
    end
  end
end

    
        context 'filter on payment state' do
      it 'only shows the orders with the selected payment state' do
        select Spree.t('payment_states.#{order1.payment_state}'), from: 'Payment State'
        click_on 'Filter Results'
        within_row(1) { expect(page).to have_content('R100') }
        within('table#listing_orders') { expect(page).not_to have_content('R200') }
      end
    end
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
              def serialize_order(order)
            resource_serializer.new(order.reload, include: resource_includes, fields: sparse_fields).serializable_hash
          end
    
            def update
          @line_item = find_line_item
    
      # Ensures that a master key has been made available in either ENV['RAILS_MASTER_KEY']
  # or in config/master.key. This key is used to decrypt credentials (and other encrypted files).
  # config.require_master_key = true
    
          it 'mutes the parent comment' do
        sign_in original_commenter
        patch '/comment_mutes/#{parent_comment_by_og.id}', params: { comment: { receive_notifications: 'false' } }
        expect(parent_comment_by_og.reload.receive_notifications).to be false
      end
    
      def broadcast_params
    params.permit(:title, :processed_html, :type_of, :sent)
    # left out body_markdown and processed_html attributes
    #   until we decide we're using them
  end
end

    
    desc 'Clean up files.'
task :clean do |t|
  FileUtils.rm_rf 'doc'
  FileUtils.rm_rf 'tmp'
  FileUtils.rm_rf 'pkg'
  FileUtils.rm_rf 'public'
  FileUtils.rm 'test/debug.log' rescue nil
  FileUtils.rm 'test/paperclip.db' rescue nil
  Dir.glob('paperclip-*.gem').each{|f| FileUtils.rm f }
end

    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
    require 'erb'
require 'digest'
require 'tempfile'
require 'paperclip/version'
require 'paperclip/geometry_parser_factory'
require 'paperclip/geometry_detector_factory'
require 'paperclip/geometry'
require 'paperclip/processor'
require 'paperclip/processor_helpers'
require 'paperclip/tempfile'
require 'paperclip/thumbnail'
require 'paperclip/interpolations/plural_cache'
require 'paperclip/interpolations'
require 'paperclip/tempfile_factory'
require 'paperclip/style'
require 'paperclip/attachment'
require 'paperclip/storage'
require 'paperclip/callbacks'
require 'paperclip/file_command_content_type_detector'
require 'paperclip/media_type_spoof_detector'
require 'paperclip/content_type_detector'
require 'paperclip/glue'
require 'paperclip/errors'
require 'paperclip/missing_attachment_styles'
require 'paperclip/validators'
require 'paperclip/logger'
require 'paperclip/helpers'
require 'paperclip/has_attached_file'
require 'paperclip/attachment_registry'
require 'paperclip/filename_cleaner'
require 'paperclip/rails_environment'
    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end