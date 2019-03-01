
        
            result['delete_rule'] = list()
    result['delete_rule_rc'] = list()
    for rule in current_rules:
        if rule not in desired_rules:
            deletions += 1
            if not module.check_mode:
                result['delete_rule'].append(rule)
                rc = gateway.del_nat_rule(**rule)
                result['delete_rule_rc'].append(rc)
            result['changed'] = True
    result['rules_deleted'] = deletions
    
    
if __name__ == '__main__':