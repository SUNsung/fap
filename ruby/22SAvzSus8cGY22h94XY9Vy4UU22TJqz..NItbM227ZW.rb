
        
        require 'action_view/helpers/tags/checkable'
    
        def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
            it 'creates new Agents, even if one already exists with the given guid (so that we don't overwrite a user's work outside of the scenario)' do
          agents(:bob_weather_agent).update_attribute :guid, 'a-weather-agent'
    
    require Rails.root.join('spec', 'helper_methods')
require Rails.root.join('spec', 'support', 'inlined_jobs')
require Rails.root.join('spec', 'support', 'user_methods')
include HelperMethods
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      describe '#destroy' do
    before do
      @message = bob.post(:status_message, text: 'hey', to: @alices_aspect.id)
      @like = alice.like!(@message)
    end
    
            def add_arg_offense(arg, type)
          add_offense(arg.parent, location: arg.source_range,
                                  message: format(MSG,
                                                  type: type.to_s.capitalize))
        end
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
end
