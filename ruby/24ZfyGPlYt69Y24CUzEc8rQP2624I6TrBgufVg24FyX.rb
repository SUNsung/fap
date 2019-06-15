
        
              def test_helpers_with_module_through_block
        @controller = AbstractHelpersBlock.new
        @controller.process(:with_module)
        assert_equal 'Module Included', @controller.response_body
      end
    end
    
      # Add groups and the proper project name to the output.
  project_name 'Homebrew'
  add_group 'Cask', %r{^/cask/}
  add_group 'Commands', [%r{/cmd/}, %r{^/dev-cmd/}]
  add_group 'Extensions', %r{^/extend/}
  add_group 'OS', [%r{^/extend/os/}, %r{^/os/}]
  add_group 'Requirements', %r{^/requirements/}
  add_group 'Scripts', [
    %r{^/brew.rb$},
    %r{^/build.rb$},
    %r{^/postinstall.rb$},
    %r{^/test.rb$},
  ]
end
