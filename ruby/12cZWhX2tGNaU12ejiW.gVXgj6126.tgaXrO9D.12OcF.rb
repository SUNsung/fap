
        
              def self.is_supported?(platform)
        platform == :ios
      end
    
            build.update_build_information!(description: 'a newer description')
      end
    
            v = history[8]
        expect(v.version_string).to eq('1.4.1')
        expect(v.version_id).to eq(815_259_390)
        expect(v.items.count).to eq(7)
        expect(v.items[3].state_key).to eq('pendingDeveloperRelease')
        expect(v.items[3].user_name).to eq('Apple')
        expect(v.items[3].user_email).to eq(nil)
        expect(v.items[3].date).to eq(1_450_461_891_000)
      end
    end
    
        describe '#create_app_group' do
      it 'should make a request create an app group' do
        response = subject.create_app_group!('Production App Group', 'group.tools.fastlane.spaceship')
        expect(response['name']).to eq('Production App Group')
        expect(response['identifier']).to eq('group.tools.fastlane')
      end
    end
    
        # @param lane [Lane] A lane object
    def add_lane(lane, override = false)
      lanes[lane.platform] ||= {}
    
        describe 'handle conflicts' do
      it 'Both primary and secondary are available, and both match the export method, it should prefer the primary mapping' do
        result = csm.merge_profile_mapping(primary_mapping: { 'identifier.1' => 'Ap-pStoreValue2' },
                                       secondary_mapping: { 'identifier.1' => 'Ap-pStoreValue1' },
                                           export_method: 'app-store')
    
    module Fastlane
  module Actions
    class UploadSymbolsToCrashlyticsAction < Action
      def self.run(params)
        require 'tmpdir'
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def root_page?
      subpath.blank? || subpath == '/' || subpath == root_path
    end
    
        attr_reader :filters
    
        def blank?
      body.blank?
    end
    
        def root_path
      self.class.root_path
    end
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        if notice
      set_flash_message! :notice, notice
      true
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
    class ApplicationController < ActionController::Base
end
    
          def stored_location_key_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        '#{scope}_return_to'
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
          def unauthorized
        render 'spree/api/errors/unauthorized', status: 401 and return
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
    
              inventory_unit.transaction do
            if inventory_unit.update(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end