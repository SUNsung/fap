
        
        require 'vagrant/util'
require 'vagrant/util/shell_quote'
require 'vagrant/util/which'
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        describe '#name' do
      subject { super().name }
      it     { should eq(:default)  }
    end
    
          it 'it should exclude the dependency' do
        subject.attributes[:python_disable_dependency] = 'rtxt-dep1'
        subject.input(example_dir)
        insist { subject.dependencies.sort } == ['python-rtxt-dep2 = 0.1', 'python-rtxt-dep4  ']
      end
    end
    
          # Value sanity check
      insist { subject.name } == 'name'
      insist { subject.version } == '1.23'
      insist { subject.scripts[:before_install] } == 'example before_install'
      insist { subject.scripts[:after_install] } == 'example after_install'
      insist { subject.scripts[:before_remove] } == 'example before_remove'
      insist { subject.scripts[:after_remove] } == 'example after_remove'
      insist { subject.scripts[:rpm_verifyscript] } == 'example rpm_verifyscript'
      insist { subject.scripts[:rpm_posttrans] } == 'example rpm_posttrans'
      insist { subject.scripts[:rpm_pretrans] } == 'example rpm_pretrans'
    end
    
      describe '#description' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, 'no description given'
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
        def validate
      # Make sure the user has passed '-s' and '-t' flags
      mandatory(@command.input_type,
                'Missing required -s flag. What package source did you want?')
      mandatory(@command.output_type,
                'Missing required -t flag. What package output did you want?')
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
      def to_s_extension; 'pkg'; end
    
        File.write(build_path('packlist'), files.sort.join('\n'))