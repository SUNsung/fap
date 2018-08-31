
        
            group = Group.create!(name: 'bob')
    group.add(moderator)
    group.save
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
      # Proxy to devise map name
  def resource_name
    devise_mapping.name
  end
  alias :scope_name :resource_name
    
    class TestController < ApplicationController
  include Rails.application.routes.url_helpers
    
              def #{mapping}_session
            current_#{mapping} && warden.session(:#{mapping})
          end
        METHODS
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
            found = possible_files(remove_root(name)).map do |f, s|
          path = if dir == '.' || Sass::Util.pathname(f).absolute?
                   f
                 else
                   '#{escape_glob_characters(dir)}/#{f}'
                 end
          Dir[path].map do |full_path|
            full_path.gsub!(REDUNDANT_DIRECTORY, File::SEPARATOR)
            [Sass::Util.cleanpath(full_path).to_s, s]
          end
        end.flatten(1)
        return if found.empty?
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
    
            def index
          if params[:ids]
            @products = product_scope.where(id: params[:ids].split(',').flatten)
          else
            @products = product_scope.ransack(params[:q]).result
          end
    
            def remove
          quantity = if params.key?(:quantity)
                       params[:quantity].to_i
                     else
                       @shipment.inventory_units_for(variant).sum(:quantity)
                     end
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end