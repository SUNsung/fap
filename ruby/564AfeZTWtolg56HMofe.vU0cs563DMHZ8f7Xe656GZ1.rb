
        
              def initialize(options = {})
        if options[:uri] && options[:token]
          @api = ::Fogbugz::Interface.new(options)
        elsif options[:uri] && options[:email] && options[:password]
          @api = ::Fogbugz::Interface.new(options)
          @api.authenticate
          @api
        end
      end
    
          def id
        raw_data['ixProject']
      end
    
          def initialize(raw_change)
        if raw_change.is_a?(Gitaly::GetRawChangesResponse::RawChange)
          @blob_id = raw_change.blob_id
          @blob_size = raw_change.size
          @old_path = raw_change.old_path.presence
          @new_path = raw_change.new_path.presence
          @operation = raw_change.operation&.downcase || :unknown
        else
          parse(raw_change)
        end
      end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
      # fill change password section on the user edit page
  def fill_change_password_section(cur_pass, new_pass, confirm_pass)
    fill_in 'user_current_password', :with => cur_pass
    fill_in 'user_password', :with => new_pass
    fill_in 'user_password_confirmation', :with => confirm_pass
  end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :read).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :read).find_by!(name: params[:id])
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end