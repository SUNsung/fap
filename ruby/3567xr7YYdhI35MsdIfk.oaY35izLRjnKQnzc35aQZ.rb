
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
              super(object_name, method_name, template_object, options)
        end
    
        def render_template(event)
      info do
        message = '  Rendered #{from_rails_root(event.payload[:identifier])}'.dup
        message << ' within #{from_rails_root(event.payload[:layout])}' if event.payload[:layout]
        message << ' (#{event.duration.round(1)}ms)'
      end
    end
    
          def args_for_lookup(name, prefixes, partial, keys, details_options)
        name, prefixes = normalize_name(name, prefixes)
        details, details_key = detail_args_for(details_options)
        [name, prefixes, partial || false, details, details_key, keys]
      end
    
              return nil unless selected_attr
    
            def email
          @email ||= username_and_email[:email].to_s
        end
    
          attr_reader :request
    
          def perform(start_id, stop_id)
        status_sql = Build
          .where('ci_builds.commit_id = ci_stages.pipeline_id')
          .where('ci_builds.stage = ci_stages.name')
          .status_sql
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def initialize(project, ref)
          @project = project
          @ref = ref
    
                    raise Errors::VMNoMatchError if vms.empty?
              else
                # String name, just look for a specific VM
                vms << @env.vms[name.to_sym]
                raise Errors::VMNotFoundError, name: name if !vms[0]
              end
            end
          else
            vms = @env.vms_ordered
          end
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # This clears out all the registered plugins. This is only used by
        # unit tests and should not be called directly.
        def reset!
          @registered.clear
        end
    
            # Registers additional provisioners to be available.
        #
        # @param [String] name Name of the provisioner.
        def self.provisioner(name=UNSET_VALUE, &block)
          data[:provisioners] ||= Registry.new
    
        if @filter.save
      redirect_to filters_path
    else
      render action: :new
    end
  end
    
        def ordered_instances
      paginated_instances.map { |account| Instance.new(account) }
    end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
    # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
            firsts, rest = [sseq.members.first], sseq.members[1..-1]
        firsts.push rest.shift if firsts.first.is_a?(Sass::Selector::Parent)
    
        # Returns the standard exception backtrace,
    # including the Sass backtrace.
    #
    # @return [Array<String>]
    def backtrace
      return nil if super.nil?
      return super if sass_backtrace.all? {|h| h.empty?}
      sass_backtrace.map do |h|
        '#{h[:filename] || '(sass)'}:#{h[:line]}' +
          (h[:mixin] ? ':in `#{h[:mixin]}'' : '')
      end + super
    end